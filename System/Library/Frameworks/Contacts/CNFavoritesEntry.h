//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContactProperty, CNContactStore, NSString;

@interface CNFavoritesEntry : NSObject
{
    NSString *_name;	// 8 = 0x8
    _Bool _dirty;	// 16 = 0x10
    int _abUid;	// 20 = 0x14
    int _abIdentifier;	// 24 = 0x18
    int _oldAbUid;	// 28 = 0x1c
    NSString *_value;	// 32 = 0x20
    NSString *_actionType;	// 40 = 0x28
    NSString *_bundleIdentifier;	// 48 = 0x30
    long long _type;	// 56 = 0x38
    CNContactStore *_contactStore;	// 64 = 0x40
    NSString *_label;	// 72 = 0x48
    NSString *_propertyKey;	// 80 = 0x50
    NSString *_abDatabaseUUID;	// 88 = 0x58
    NSString *_originalName;	// 96 = 0x60
    CNContact *_contact;	// 104 = 0x68
    NSString *_labeledValueIdentifier;	// 112 = 0x70
}

+ (id)descriptorsForRequiredKeysForPropertyKey:(id)arg1;	// IMP=0x00000000000e154f
+ (void)initialize;	// IMP=0x00000000000e1487
- (void).cxx_destruct;	// IMP=0x00000000000e59b4
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(nonatomic) int oldAbUid; // @synthesize oldAbUid=_oldAbUid;
@property(nonatomic) int abIdentifier; // @synthesize abIdentifier=_abIdentifier;
@property(nonatomic) int abUid; // @synthesize abUid=_abUid;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSString *actionType;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void)applyChangeRecord:(id)arg1;	// IMP=0x00000000000e572f
- (void)resetContactMatch;	// IMP=0x00000000000e55d3
- (_Bool)rematchWithContacts;	// IMP=0x00000000000e5501
- (id)rematch;	// IMP=0x00000000000e3e8f
- (void)dictionaryRepresentation:(id *)arg1 isDirty:(_Bool *)arg2;	// IMP=0x00000000000e3c8a
- (id)dictionaryRepresentation;	// IMP=0x00000000000e38e3
- (id)initWithDictionaryRepresentation:(id)arg1 store:(id)arg2;	// IMP=0x00000000000e335e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2d29
@property(readonly, nonatomic) CNContactProperty *contactProperty;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x00000000000e2404
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 store:(id)arg6;	// IMP=0x00000000000e221c
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 store:(id)arg5;	// IMP=0x00000000000e21f9
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4;	// IMP=0x00000000000e1d1c

@end

