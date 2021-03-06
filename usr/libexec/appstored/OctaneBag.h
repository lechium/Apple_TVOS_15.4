//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface OctaneBag : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    long long _port;	// 24 = 0x18
    _Bool expired;	// 32 = 0x20
    NSDate *expirationDate;	// 40 = 0x28
    NSString *profile;	// 48 = 0x30
    NSString *profileVersion;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001f3262
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile;
@property(readonly, nonatomic, getter=isExpired) _Bool expired; // @synthesize expired;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate;
- (void)_fetchBag;	// IMP=0x00100000001f2d30
- (id)_bagValueForKey:(id)arg1 ofType:(unsigned long long)arg2;	// IMP=0x00100000001f2941
- (id)stringForKey:(id)arg1;	// IMP=0x00100000001f292a
- (id)integerForKey:(id)arg1;	// IMP=0x00100000001f2913
- (id)doubleForKey:(id)arg1;	// IMP=0x00100000001f28fc
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00100000001f28e5
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f279e
- (id)boolForKey:(id)arg1;	// IMP=0x00100000001f2787
- (id)arrayForKey:(id)arg1;	// IMP=0x00100000001f2773
- (id)URLForKey:(id)arg1;	// IMP=0x00100000001f275c
- (void)invalidate;	// IMP=0x00100000001f26f6
- (id)init;	// IMP=0x00100000001f2674

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end

