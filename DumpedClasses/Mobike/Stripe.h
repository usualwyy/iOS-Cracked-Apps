//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Stripe : NSObject
{
}

+ (id)defaultPublishableKey;
+ (void)setDefaultPublishableKey:(id)arg1;
+ (_Bool)handleStripeURLCallbackWithURL:(id)arg1;
+ (id)paymentRequestWithMerchantIdentifier:(id)arg1;
+ (_Bool)deviceSupportsApplePay;
+ (id)supportedPKPaymentNetworks;
+ (_Bool)canSubmitPaymentRequest:(id)arg1;

@end
