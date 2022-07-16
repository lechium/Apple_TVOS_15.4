//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface UITransformer <BSDescriptionProviding, NSMutableCopying>
{
    NSMutableArray *_transforms;	// 56 = 0x38
    NSMutableArray *_transformReasonAssociations;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000664a06
@property(readonly, copy, nonatomic) NSArray *transforms; // @synthesize transforms=_transforms;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000664901
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006648d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000066484e
@property(readonly) unsigned long long hash;
- (id)_initWithTransformer:(id)arg1;	// IMP=0x00000000006646cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
