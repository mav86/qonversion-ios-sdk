#import <Foundation/Foundation.h>

typedef NS_ENUM(unsigned int, QonversionProductType){
  QonversionProductTypeUnknown = -1,
  QonversionProductTypeTrial = 0,
  QonversionProductTypeSubscription = 1,
  QonversionProductTypeOneTime = 2
};

typedef NS_ENUM(unsigned int, QonversionProductDuration){
  QonversionProductDurationUnknown = -1,
  QonversionProductDurationWeekly = 0,
  QonversionProductDurationMonthly = 1,
  QonversionProductDuration3Month = 2,
  QonversionProductDuration6Month = 3,
  QonversionProductDurationAnnual = 4,
  QonversionProductDurationLifetime = 5
};

NS_SWIFT_NAME(Qonversion.Product)
@interface QonversionProduct : NSObject <NSCoding>

/**
 Product ID created in Qonversion Dashboard
 @see [Create Products](https://qonversion.io/docs/create-products)
 */
@property (nonatomic, copy) NSString *qonversionID;

/**
 Apple Store Product ID
 @see [Create Products](https://qonversion.io/docs/create-products)
 */
@property (nonatomic, copy) NSString *storeID;

/**
 Product type
 Trial, Subscription or one-time purchase
 @see [Products types](https://qonversion.io/docs/product-types)
 */
@property (nonatomic) QonversionProductType type;

/**
 Product duration
 @see [Products durations](https://qonversion.io/docs/product-durations)
 */
@property (nonatomic) QonversionProductDuration duration;

@end
