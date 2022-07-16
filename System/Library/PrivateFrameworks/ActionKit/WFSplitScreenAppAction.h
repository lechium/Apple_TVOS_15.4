//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFSplitScreenAppAction : WFAction
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_leftWindowsToWindowID;	// 16 = 0x10
    NSMutableDictionary *_rightWindowsToWindowID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001df3d9
@property(retain, nonatomic) NSMutableDictionary *rightWindowsToWindowID; // @synthesize rightWindowsToWindowID=_rightWindowsToWindowID;
@property(retain, nonatomic) NSMutableDictionary *leftWindowsToWindowID; // @synthesize leftWindowsToWindowID=_leftWindowsToWindowID;
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x00000000001df301
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

@end
