//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamKit/NSCopying-Protocol.h>
#import <ShazamKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableOrderedSet;

@interface SHMediaLibrarySnapshot : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableOrderedSet *_changeset;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ecc9
- (void).cxx_destruct;	// IMP=0x000000000000edeb
@property(retain, nonatomic) NSMutableOrderedSet *changeset; // @synthesize changeset=_changeset;
- (id)description;	// IMP=0x000000000000ed5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ecd1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000eca6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ebd8
- (_Bool)isConflictingChange:(id)arg1;	// IMP=0x000000000000eaa0
- (void)mergeSnapshot:(id)arg1;	// IMP=0x000000000000ea41
- (void)addChanges:(id)arg1;	// IMP=0x000000000000e7b6
- (void)updateItem:(id)arg1;	// IMP=0x000000000000e6e5
- (void)removeItem:(id)arg1;	// IMP=0x000000000000e614
- (void)addItem:(id)arg1;	// IMP=0x000000000000e543
@property(readonly, nonatomic) NSArray *changes;
- (id)initWithChanges:(id)arg1;	// IMP=0x000000000000e480
- (id)init;	// IMP=0x000000000000e426

@end

