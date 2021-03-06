//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricsKit/AMSBagProtocol-Protocol.h>

@class AMSProcessInfo, NSDate, NSDictionary, NSString;

@interface MTFrozenBag : NSObject <AMSBagProtocol>
{
    NSString *_profile;	// 8 = 0x8
    NSString *_profileVersion;	// 16 = 0x10
    NSDictionary *_config;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000444fb
@property(copy, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(copy, nonatomic) NSString *profile; // @synthesize profile=_profile;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004449e
- (id)dictionaryForKey:(id)arg1;	// IMP=0x000000000004436b
- (id)URLForKey:(id)arg1;	// IMP=0x0000000000044238
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000044105
- (id)integerForKey:(id)arg1;	// IMP=0x0000000000043fd2
- (id)doubleForKey:(id)arg1;	// IMP=0x0000000000043e9f
- (id)boolForKey:(id)arg1;	// IMP=0x0000000000043d6c
- (id)arrayForKey:(id)arg1;	// IMP=0x0000000000043c3c
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000043b2d
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 config:(id)arg3;	// IMP=0x0000000000043a63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end

