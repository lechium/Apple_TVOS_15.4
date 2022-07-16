//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPComponentMediaPlayable-Protocol.h>
#import <LinkPresentation/LPContentInsettable-Protocol.h>

@class LPAudioPlayButtonStyle;

__attribute__((visibility("hidden")))
@interface LPPlayButtonView <LPContentInsettable, LPComponentMediaPlayable>
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    LPAudioPlayButtonStyle *_style;	// 40 = 0x28
    _Bool _hasBuilt;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000495f3
- (id)playable;	// IMP=0x00000000000495eb
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000000495cd
- (void)buildSubviewsIfNeeded;	// IMP=0x00000000000495b6
- (id)initWithHost:(id)arg1 playbackInformation:(id)arg2 style:(id)arg3;	// IMP=0x000000000004952b
- (id)initWithHost:(id)arg1;	// IMP=0x000000000004951d

@end
