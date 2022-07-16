//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSXPCListener;

@interface UABestAppSuggestionController
{
    _Bool _disableEntitlementsCheck;	// 8 = 0x8
    NSXPCListener *_bestAppsListener;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000367b
@property(retain) NSXPCListener *bestAppsListener; // @synthesize bestAppsListener=_bestAppsListener;
@property _Bool disableEntitlementsCheck; // @synthesize disableEntitlementsCheck=_disableEntitlementsCheck;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000003213
- (_Bool)terminate;	// IMP=0x0010000000003128
- (_Bool)resume;	// IMP=0x001000000000304c
- (_Bool)suspend;	// IMP=0x0010000000002f70
- (id)initWithManager:(id)arg1 name:(id)arg2;	// IMP=0x0010000000002e61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

