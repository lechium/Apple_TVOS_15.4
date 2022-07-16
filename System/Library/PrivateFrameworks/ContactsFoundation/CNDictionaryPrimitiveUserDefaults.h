//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNPrimitiveUserDefaults-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNDictionaryPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults>
{
    NSMutableDictionary *_preferences;	// 8 = 0x8
    unsigned long long _synchronizeCount;	// 16 = 0x10
    unsigned long long _setupAutosyncCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000054bfc
@property(readonly) unsigned long long setupAutosyncCount; // @synthesize setupAutosyncCount=_setupAutosyncCount;
@property(readonly) unsigned long long synchronizeCount; // @synthesize synchronizeCount=_synchronizeCount;
- (void)setupAutosync;	// IMP=0x0000000000054bde
- (_Bool)synchronize;	// IMP=0x0000000000054bd2
- (void)primitiveRemoveObjectForKey:(id)arg1;	// IMP=0x0000000000054bbc
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(_Bool *)arg2;	// IMP=0x0000000000054b66
- (_Bool)primitiveBoolValueForKey:(id)arg1 keyExists:(_Bool *)arg2;	// IMP=0x0000000000054b10
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000054ae4
- (id)primitiveObjectForKey:(id)arg1;	// IMP=0x0000000000054ace
- (id)init;	// IMP=0x0000000000054a66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

