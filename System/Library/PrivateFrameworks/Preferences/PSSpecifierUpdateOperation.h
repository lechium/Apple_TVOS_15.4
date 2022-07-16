//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSNumber, PSSpecifier;

@interface PSSpecifierUpdateOperation : NSObject <NSCopying>
{
    _Bool _removingGroupSpecifierRemovesEntireGroup;	// 8 = 0x8
    long long _operation;	// 16 = 0x10
    PSSpecifier *_specifier;	// 24 = 0x18
    NSNumber *_index;	// 32 = 0x20
    NSNumber *_toIndex;	// 40 = 0x28
}

+ (id)moveOperationWithSpecifier:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;	// IMP=0x0000000000045f72
+ (id)_removeOneSpecifierOnlyOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000045ed3
+ (id)removeOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000045e3e
+ (id)reloadOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000045da9
+ (id)insertOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000045d14
- (void).cxx_destruct;	// IMP=0x00000000000466cc
@property(nonatomic) _Bool removingGroupSpecifierRemovesEntireGroup; // @synthesize removingGroupSpecifierRemovesEntireGroup=_removingGroupSpecifierRemovesEntireGroup;
@property(retain, nonatomic) NSNumber *toIndex; // @synthesize toIndex=_toIndex;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(readonly, nonatomic) long long operation; // @synthesize operation=_operation;
- (_Bool)applyToArray:(id)arg1;	// IMP=0x0000000000046374
- (id)description;	// IMP=0x0000000000046199
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046144
- (id)initWithOperation:(long long)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4 removingGroupSpecifierRemovesEntireGroup:(_Bool)arg5;	// IMP=0x000000000004606b
- (id)initWithOperation:(long long)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4;	// IMP=0x0000000000046049
- (id)initWithOperation:(long long)arg1 specifier:(id)arg2 index:(id)arg3;	// IMP=0x0000000000046034

@end
