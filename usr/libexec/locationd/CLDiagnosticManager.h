//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSFileManager, NSMutableSet, NSString, NSURL, NSXPCConnection, NSXPCListener;

@interface CLDiagnosticManager : CLIntersiloService
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSMutableSet *_registeredFiles;	// 16 = 0x10
    NSFileManager *_fileManager;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
}

+ (_Bool)isSupported;	// IMP=0x00200000002ef8d8
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSMutableSet *registeredFiles; // @synthesize registeredFiles=_registeredFiles;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (id)pathForDate:(id)arg1 withBasePath:(id)arg2;	// IMP=0x00100000002f0e64
@property(readonly, nonatomic) NSURL *mobileCrashReporterPath;
- (_Bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtURL:(id)arg3 toURL:(id)arg4;	// IMP=0x00100000002f0d2f
- (_Bool)fileManager:(id)arg1 shouldCopyItemAtURL:(id)arg2 toURL:(id)arg3;	// IMP=0x00100000002f0aad
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000002f0471
- (void)copyRegisteredFilesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002eff52
- (void)unregisterFileForCollection:(id)arg1;	// IMP=0x00100000002efd87
- (void)registerFileForCollection:(id)arg1;	// IMP=0x00100000002efbbc
- (void)endService;	// IMP=0x00100000002efaa6
- (void)beginService;	// IMP=0x00100000002ef91d
- (id)init;	// IMP=0x00100000002ef8e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
