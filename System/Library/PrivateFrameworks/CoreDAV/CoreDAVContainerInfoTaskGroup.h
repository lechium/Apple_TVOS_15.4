//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVPropFindTaskDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString;
@protocol CoreDAVContainerInfoTaskGroupDelegate;

@interface CoreDAVContainerInfoTaskGroup <CoreDAVPropFindTaskDelegate>
{
    int _phase;	// 88 = 0x58
    NSMutableSet *_containerURLs;	// 96 = 0x60
    NSMutableSet *_containers;	// 104 = 0x68
    int _containerInfoDepth;	// 112 = 0x70
    NSString *_appSpecificHomeSetPropNameSpace;	// 120 = 0x78
    NSString *_appSpecificHomeSetPropName;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000007548
@property(readonly, nonatomic) NSSet *containerURLs; // @synthesize containerURLs=_containerURLs;
@property(nonatomic) int containerInfoDepth; // @synthesize containerInfoDepth=_containerInfoDepth;
- (id)_copyContainerParserMappings;	// IMP=0x00000000000074fe
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;	// IMP=0x0000000000007492
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;	// IMP=0x000000000000609c
- (void)_getContainerTopLevelInfo;	// IMP=0x0000000000005d84
- (void)_getContainerHomeSet;	// IMP=0x0000000000005bd9
- (int)containerInfoDepthForURL:(id)arg1;	// IMP=0x0000000000005bc7
- (void)taskGroupWillCancelWithError:(id)arg1;	// IMP=0x0000000000005ad9
- (void)startTaskGroup;	// IMP=0x0000000000005a8c
@property(readonly, copy) NSString *description;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;	// IMP=0x000000000000595d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CoreDAVContainerInfoTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

