//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFControlPanelItemRule-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HFControlPanelItemSingleControlRule : NSObject <HFControlPanelItemRule>
{
    CDUnknownBlockType _filter;	// 8 = 0x8
    CDUnknownBlockType _displayResultsGenerator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001bf12b
@property(readonly, copy, nonatomic) CDUnknownBlockType displayResultsGenerator; // @synthesize displayResultsGenerator=_displayResultsGenerator;
@property(readonly, copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (id)controlPanelItemForControlItems:(id)arg1;	// IMP=0x00000000001befe7
- (id)initWithFilter:(CDUnknownBlockType)arg1 displayResultsGenerator:(CDUnknownBlockType)arg2;	// IMP=0x00000000001bef2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

