//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableDictionary, NSString;

@interface AXCodeItem : NSObject
{
    NSBundle *_cachedBundle;	// 8 = 0x8
    struct {
        unsigned int isDyldOpened:1;
    } _flags;	// 16 = 0x10
    unsigned long long _loadedAtTimestamp;	// 24 = 0x18
    unsigned short _loadOrder;	// 32 = 0x20
    NSMutableDictionary *_platformToTarget;	// 40 = 0x28
    NSString *_path;	// 48 = 0x30
    AXCodeItem *_associatedAccessibilityCodeItem;	// 56 = 0x38
    long long _type;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    long long _targetType;	// 80 = 0x50
    AXCodeItem *_targetCodeItem;	// 88 = 0x58
}

+ (long long)codeItemTypeFromString:(id)arg1;	// IMP=0x0000000000091f63
+ (id)_codeItemQueue;	// IMP=0x0000000000091f0c
- (void).cxx_destruct;	// IMP=0x000000000009394e
@property(nonatomic) __weak AXCodeItem *targetCodeItem; // @synthesize targetCodeItem=_targetCodeItem;
@property(nonatomic) unsigned short loadOrder; // @synthesize loadOrder=_loadOrder;
@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak AXCodeItem *associatedAccessibilityCodeItem; // @synthesize associatedAccessibilityCodeItem=_associatedAccessibilityCodeItem;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSMutableDictionary *platformToTarget; // @synthesize platformToTarget=_platformToTarget;
- (void)loadWithStrategy:(long long)arg1 onQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000935cf
- (id)prepareBackingBundleIfNeeded:(id *)arg1;	// IMP=0x00000000000931c6
@property(readonly, nonatomic) NSBundle *cachedBundle;
@property(readonly, nonatomic) NSString *debugCodeTypeDescription;
- (_Bool)_isSystemAppAccessibilityBundle;	// IMP=0x0000000000092f75
@property(readonly, nonatomic) _Bool isAccessibilityBundle;
@property(nonatomic) _Bool isLoaded;
@property(readonly, nonatomic) unsigned long long loadedAtTimestamp;
- (void)_cacheLazyProperties;	// IMP=0x0000000000092816
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000926e0
- (unsigned long long)hash;	// IMP=0x000000000009269c
- (id)description;	// IMP=0x000000000009235c
- (void)addPlatformToTargetEntries:(id)arg1;	// IMP=0x00000000000922ea
- (id)initAccessibilityCodeItemWithPath:(id)arg1 targetType:(long long)arg2 platformToTarget:(id)arg3 loadOrder:(unsigned short)arg4;	// IMP=0x0000000000092254
- (id)initWithPath:(id)arg1 isDyldOpened:(_Bool)arg2;	// IMP=0x00000000000921c7

@end
