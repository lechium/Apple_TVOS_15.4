//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <SiriInference/MLFeatureProvider-Protocol.h>

@class MISSING_TYPE, NSSet;

@interface _TtC13SiriInference27ContactRanker_watchosOutput : _TtCs12_SwiftObject <MLFeatureProvider>
{
    MISSING_TYPE *provider;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_scores;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_showToUser;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_topMatchIsConfident;	// 40 = 0x28
}

- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000279f90
@property(nonatomic, readonly) NSSet *featureNames;

@end

