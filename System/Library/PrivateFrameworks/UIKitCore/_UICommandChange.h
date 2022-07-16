//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UICommandChange : NSObject <NSCopying, NSSecureCoding>
{
    id _anchor;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000e50908
- (void).cxx_destruct;	// IMP=0x0000000000e50c0f
@property(readonly, nonatomic) id anchor; // @synthesize anchor=_anchor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e50ba6
- (unsigned long long)hash;	// IMP=0x0000000000e50b90
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000e50b6d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e50b62
- (_Bool)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x0000000000e50ae5
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x0000000000e50a6b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000e50983
- (id)initWithAnchor:(id)arg1;	// IMP=0x0000000000e50910

@end
