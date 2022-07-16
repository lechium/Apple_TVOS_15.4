//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/WFFileStorageService-Protocol.h>

@class INAppDescriptor, NSProgress, NSString;

@interface WFDefaultFileStorageService : NSObject <WFFileStorageService>
{
    NSProgress *_progress;	// 8 = 0x8
}

+ (Class)resultItemClass;	// IMP=0x00000000002fd2b0
+ (id)serviceName;	// IMP=0x00000000002fd29f
+ (id)containerName;	// IMP=0x00000000002fd1ad
- (void).cxx_destruct;	// IMP=0x00000000002fe5a9
@property(nonatomic) __weak NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) INAppDescriptor *associatedAppDescriptor;
@property(readonly, nonatomic) _Bool supportsJumpingToSubdirectoryInUI;
@property(readonly, nonatomic) NSString *storageLocationPrefix;
@property(readonly, nonatomic) Class accessResourceClass;
@property(readonly, nonatomic) Class objectRepresentationClass;
@property(readonly, nonatomic) _Bool hasPublicURLs;
- (void)appendText:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002fe4e3
- (void)createFolderAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002fe4d1
- (id)saveFiles:(id)arg1 withManagedLevel:(unsigned long long)arg2 toPath:(id)arg3 options:(unsigned long long)arg4 progress:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002fe4be
- (void)deleteItems:(id)arg1 deleteImmediately:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fe4ae
- (void)renameItem:(id)arg1 name:(id)arg2 withManagedLevel:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002fe49b
- (void)moveItem:(id)arg1 replaceExisting:(_Bool)arg2 withManagedLevel:(unsigned long long)arg3 toDirectory:(id)arg4 progress:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002fe488
- (void)recursivelyCreateFolderAtPathWithComponents:(id)arg1 withParentDirectoryItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fe476
- (void)createFolderAtPath:(id)arg1 parentDirectoryItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fe464
- (void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fe452
- (void)_retrieveFilesForAppendingAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002fe2c3
- (void)appendText:(id)arg1 toDirectory:(id)arg2 subpath:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002fe079
- (void)_moveFile:(id)arg1 replaceExisting:(_Bool)arg2 withManagedLevel:(unsigned long long)arg3 toDestination:(id)arg4 progress:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002fde91
- (void)moveFile:(id)arg1 replaceExisting:(_Bool)arg2 withManagedLevel:(unsigned long long)arg3 toDirectory:(id)arg4 progress:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002fdd44
- (void)moveFile:(id)arg1 destination:(id)arg2 withManagedLevel:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002fdc92
- (void)retrieveFilesForAppendingAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002fdbcc
- (void)createFolderAtPath:(id)arg1 inDirectory:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fdbba
- (void)deleteFiles:(id)arg1 deleteImmediately:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fdbaa
- (void)getSharingURLsForFiles:(id)arg1 usePublicURLs:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fdb1a
- (id)_saveFiles:(id)arg1 toURL:(id)arg2 isDestinationKnownDirectory:(_Bool)arg3 options:(unsigned long long)arg4 progress:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002fd8de
- (id)saveFiles:(id)arg1 withManagedLevel:(unsigned long long)arg2 toDirectory:(id)arg3 subpath:(id)arg4 options:(unsigned long long)arg5 progress:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000002fd632
- (void)retrieveFilesAtPath:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002fd2d3
- (void)retrieveFileAtPath:(id)arg1 fromDirectory:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002fd2c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
