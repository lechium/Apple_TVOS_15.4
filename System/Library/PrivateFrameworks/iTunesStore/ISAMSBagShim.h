//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/AMSBagProtocol-Protocol.h>

@class AMSProcessInfo, ISURLBag, NSDate, NSString, SSBag;

@interface ISAMSBagShim : NSObject <AMSBagProtocol>
{
    SSBag *_bag;	// 8 = 0x8
    ISURLBag *_URLBag;	// 16 = 0x10
    long long _type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004db8a
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) ISURLBag *URLBag; // @synthesize URLBag=_URLBag;
@property(retain, nonatomic) SSBag *bag; // @synthesize bag=_bag;
- (id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2;	// IMP=0x000000000004d7d1
- (id)stringForKey:(id)arg1;	// IMP=0x000000000004d7ba
- (id)integerForKey:(id)arg1;	// IMP=0x000000000004d7a3
- (id)doubleForKey:(id)arg1;	// IMP=0x000000000004d78c
- (id)dictionaryForKey:(id)arg1;	// IMP=0x000000000004d775
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004d70c
- (id)boolForKey:(id)arg1;	// IMP=0x000000000004d6f5
- (id)arrayForKey:(id)arg1;	// IMP=0x000000000004d6e1
- (id)URLForKey:(id)arg1;	// IMP=0x000000000004d6ca
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
- (_Bool)isLoaded;	// IMP=0x000000000004d6a8
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (id)initWithURLBag:(id)arg1;	// IMP=0x000000000004d620
- (id)initWithBag:(id)arg1;	// IMP=0x000000000004d5a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end

