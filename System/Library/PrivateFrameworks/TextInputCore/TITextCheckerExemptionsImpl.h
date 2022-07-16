//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSUUID;

@interface TITextCheckerExemptionsImpl : NSObject
{
    CDUnknownBlockType _contactObserver;	// 8 = 0x8
    id _userDictionaryObserver;	// 16 = 0x10
    unsigned long long _observerAssertionCount;	// 24 = 0x18
    NSSet *_addressBookTokens;	// 32 = 0x20
    NSSet *_userDictionaryTokens;	// 40 = 0x28
    NSUUID *_userDictionaryUUID;	// 48 = 0x30
}

+ (id)sharedTextCheckerExemptionsImpl;	// IMP=0x000000000008a526
- (void).cxx_destruct;	// IMP=0x0000000000089a9e
@property(copy, nonatomic) NSUUID *userDictionaryUUID; // @synthesize userDictionaryUUID=_userDictionaryUUID;
@property(retain, nonatomic) NSSet *userDictionaryTokens; // @synthesize userDictionaryTokens=_userDictionaryTokens;
@property(retain, nonatomic) NSSet *addressBookTokens; // @synthesize addressBookTokens=_addressBookTokens;
- (void)removeObserverAssertion;	// IMP=0x00000000000897fb
- (void)addObserverAssertion;	// IMP=0x000000000008952e
- (_Bool)stringIsExemptFromChecker:(id)arg1;	// IMP=0x0000000000089409
- (void)dealloc;	// IMP=0x00000000000893da

@end

