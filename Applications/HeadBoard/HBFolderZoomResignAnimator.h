//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBFolderCell, NSString;

@interface HBFolderZoomResignAnimator : NSObject
{
    HBFolderCell *_folderCell;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000464b4
@property(retain, nonatomic) HBFolderCell *folderCell; // @synthesize folderCell=_folderCell;
- (void)animateTransition:(id)arg1;	// IMP=0x0010000000045ebe
- (double)transitionDuration:(id)arg1;	// IMP=0x0010000000045eb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

