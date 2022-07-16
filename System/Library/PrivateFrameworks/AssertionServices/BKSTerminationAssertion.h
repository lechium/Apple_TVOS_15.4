//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSTerminationContext, NSString;

@interface BKSTerminationAssertion
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    unsigned long long _efficacy;	// 16 = 0x10
    BKSTerminationContext *_context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000008ebe
@property(readonly, copy, nonatomic) BKSTerminationContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *targetBundleIdentifier; // @synthesize targetBundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) unsigned long long efficacy; // @synthesize efficacy=_efficacy;
- (void)invalidate;	// IMP=0x0000000000008e74
- (_Bool)acquire;	// IMP=0x00000000000087a6
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 context:(id)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000085bf
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000084fe
- (unsigned long long)_bksErrorForRBSRequestError:(unsigned long long)arg1;	// IMP=0x00000000000084df

@end

