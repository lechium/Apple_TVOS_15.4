//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REHTTPServerDelegate-Protocol.h>

@class NSArray, NSString, REHTMLPageBuilder, REHTTPFileCache, REHTTPServer;
@protocol REHTTPDebugServerDataSource;

@interface REHTTPDebugServer : NSObject <REHTTPServerDelegate>
{
    REHTTPServer *_server;	// 8 = 0x8
    REHTMLPageBuilder *_pageBuilder;	// 16 = 0x10
    REHTTPFileCache *_cache;	// 24 = 0x18
    struct {
        unsigned int implementsProvideAvailableEngines:1;
        unsigned int implementsHandleFileRequest:1;
    } _dataSourceCallbacks;	// 32 = 0x20
    id <REHTTPDebugServerDataSource> _dataSource;	// 40 = 0x28
    NSArray *_availableEngines;	// 48 = 0x30
    NSString *_processName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005a246
@property(retain) NSString *processName; // @synthesize processName=_processName;
@property(retain) NSArray *availableEngines; // @synthesize availableEngines=_availableEngines;
@property(readonly, nonatomic) __weak id <REHTTPDebugServerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_loadEngineListWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059bf3
- (id)_engineList;	// IMP=0x0000000000059be6
- (id)_aboutPage;	// IMP=0x0000000000059a92
- (id)_landingPage;	// IMP=0x0000000000059a0a
- (id)_landPageFileName;	// IMP=0x00000000000599fd
- (id)_enginesPage;	// IMP=0x0000000000059912
- (id)_radarLinkWithTitle:(id)arg1;	// IMP=0x000000000005989c
- (id)_pageTitle;	// IMP=0x000000000005988f
- (void)_loadPageForReservedPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059713
- (_Bool)_isReservedFilePath:(id)arg1;	// IMP=0x0000000000059411
- (SEL)_serverMethod:(id)arg1;	// IMP=0x00000000000592a7
- (id)_pageMap;	// IMP=0x0000000000059120
- (void)httpServer:(id)arg1 handleRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000058b85
- (void)_availableEngineInstancesForProcess:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058af0
- (void)_handleFileRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058a5a
- (id)_create404Element;	// IMP=0x0000000000058991
- (id)_createContentItemWithTitle:(id)arg1 content:(id)arg2;	// IMP=0x00000000000587ca
- (void)_loadAvailableEngines:(id)arg1;	// IMP=0x0000000000057c8f
@property(readonly, nonatomic) unsigned short port;
- (id)initWithPort:(unsigned short)arg1 dataSource:(id)arg2;	// IMP=0x0000000000057a70

@end
