//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/AMSBagProtocol-Protocol.h>

@class AMSProcessInfo, NSDate, NSDictionary, NSString, SSURLBag;

@interface IKURLBagCache : NSObject <AMSBagProtocol>
{
    SSURLBag *_urlBag;	// 8 = 0x8
    NSDictionary *_existingDictionary;	// 16 = 0x10
    NSString *_cachePath;	// 24 = 0x18
}

+ (id)URLBagContext;	// IMP=0x00000000000153bf
+ (id)sharedCache;	// IMP=0x0000000000014817
- (void).cxx_destruct;	// IMP=0x0000000000015a5d
@property(readonly, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(readonly, nonatomic) NSDictionary *existingDictionary; // @synthesize existingDictionary=_existingDictionary;
@property(readonly, nonatomic) SSURLBag *urlBag; // @synthesize urlBag=_urlBag;
- (id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2;	// IMP=0x0000000000015943
- (id)stringForKey:(id)arg1;	// IMP=0x000000000001592c
- (id)integerForKey:(id)arg1;	// IMP=0x0000000000015915
- (id)doubleForKey:(id)arg1;	// IMP=0x00000000000158fe
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000000000158e7
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000154e5
- (id)boolForKey:(id)arg1;	// IMP=0x00000000000154ce
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000000154ba
- (id)URLForKey:(id)arg1;	// IMP=0x00000000000154a3
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
- (_Bool)isLoaded;	// IMP=0x0000000000015481
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (void)checkTrustStatusForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015258
- (_Bool)isTrustedURL:(id)arg1;	// IMP=0x0000000000015132
- (void)loadValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014f90
- (id)_urlForKey:(id)arg1;	// IMP=0x0000000000014f2c
- (id)valueForKey:(id)arg1;	// IMP=0x0000000000014d92
- (void)_loadWithNotification:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014a48
- (void)updateWithInvalidation:(_Bool)arg1;	// IMP=0x000000000001499c
- (id)init;	// IMP=0x00000000000148a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end

