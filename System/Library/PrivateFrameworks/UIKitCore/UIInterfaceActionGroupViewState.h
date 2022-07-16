//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInterfaceActionGroupViewState <NSCopying>
{
    _Bool _isVerticalLayoutAxis;	// 32 = 0x20
    long long _resolvedPresentationStyle;	// 40 = 0x28
}

@property(readonly, nonatomic) long long resolvedPresentationStyle; // @synthesize resolvedPresentationStyle=_resolvedPresentationStyle;
@property(readonly, nonatomic) _Bool isVerticalLayoutAxis; // @synthesize isVerticalLayoutAxis=_isVerticalLayoutAxis;
- (_Bool)_stateEqualToGroupViewState:(id)arg1;	// IMP=0x000000000002248d
- (void)_collectStateFromGroupViewState:(id)arg1;	// IMP=0x0000000000022424
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000223cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002237d
- (id)description;	// IMP=0x000000000002228b
- (id)copyWithResolvedPresentationStyle:(long long)arg1;	// IMP=0x0000000000022263
- (id)copyWithVerticalLayoutAxis:(_Bool)arg1;	// IMP=0x000000000002223d
- (id)init;	// IMP=0x00000000000221ef

@end

