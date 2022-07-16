//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSDisplayLayoutElement.h>

#import <SpringBoardServices/SBSDisplayLayoutElement-Protocol.h>

@class NSString;

@interface FBSDisplayLayoutElement (SBSDisplayLayoutElement) <SBSDisplayLayoutElement>
@property(readonly, nonatomic, getter=sb_isStashedPIP) _Bool sb_stashedPIP;
@property(readonly, nonatomic, getter=sb_isTransitioning) _Bool sb_transitioning;
@property(readonly, nonatomic) long long layoutRole;
@property(readonly, nonatomic, getter=isSpringBoardElement) _Bool springBoardElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

