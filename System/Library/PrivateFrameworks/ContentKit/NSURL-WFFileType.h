//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

#import <ContentKit/WFNaming-Protocol.h>

@class NSString, WFFileType;

@interface NSURL (WFFileType) <WFNaming>
+ (id)dc_queryStringWithQueryDictionary:(id)arg1 addingPercentEscapes:(_Bool)arg2;	// IMP=0x00000000000ad138
+ (id)dc_queryStringWithQueryDictionary:(id)arg1;	// IMP=0x00000000000ad121
+ (id)dc_dictionaryFromQueryString:(id)arg1;	// IMP=0x00000000000acef7
+ (id)dc_queryItemsFromQueryDictionary:(id)arg1;	// IMP=0x00000000000acc08
+ (id)dc_queryItemsFromQueryString:(id)arg1;	// IMP=0x00000000000acba7
+ (id)wf_savedShortcutStatesURL;	// IMP=0x00000000000bb78f
+ (id)wf_shortcutsDirectoryURL;	// IMP=0x00000000000bb733
+ (id)rootVolumeURL;	// IMP=0x00000000000bb70e
+ (id)realLibraryDirectoryURL;	// IMP=0x00000000000bb6b2
+ (id)realHomeDirectoryURL;	// IMP=0x00000000000bb682
@property(readonly, nonatomic) WFFileType *wfFileType;
@property(readonly, copy, nonatomic) NSString *wfName;
- (_Bool)dc_matchesHost:(id)arg1;	// IMP=0x00000000000acaf5
- (id)dc_fragmentQueryDictionary;	// IMP=0x00000000000aca3b
- (id)dc_queryDictionary;	// IMP=0x00000000000ac9d8
- (id)wf_displayPath;	// IMP=0x00000000000afc2f
- (id)wf_displayPathComponents;	// IMP=0x00000000000afc27
- (_Bool)wf_proposedFileIsContainedByDirectoryAtURL:(id)arg1;	// IMP=0x00000000000bb4dd
- (_Bool)isContainedByDirectoryAtURL:(id)arg1;	// IMP=0x00000000000bb4c4
- (id)wf_relativePathFromURL:(id)arg1;	// IMP=0x00000000000bb31f
- (long long)wf_relationshipToDirectoryAtURL:(id)arg1;	// IMP=0x00000000000bb281
- (id)volumeName;	// IMP=0x00000000000bb23c
- (id)fileSize;	// IMP=0x00000000000bb169
- (_Bool)wf_fileHasExtendedAttribute:(id)arg1;	// IMP=0x00000000000bb02c
- (_Bool)wf_sandboxAllowsWritingFileWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000000bb013
- (_Bool)wf_sandboxAllowsReadingFileWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000000baffa
- (_Bool)wf_sandboxAllowsWritingFile;	// IMP=0x00000000000bafe1
- (_Bool)wf_sandboxAllowsReadingFile;	// IMP=0x00000000000bafc8
- (_Bool)wf_sandboxAllowsOperation:(const char *)arg1 withAuditToken:(CDStruct_6ad76789)arg2;	// IMP=0x00000000000baf78
- (_Bool)wf_sandboxAllowsOperation:(const char *)arg1;	// IMP=0x00000000000baf23
- (_Bool)fileIsDirectory;	// IMP=0x00000000000bae9a
- (_Bool)fileIsWritable;	// IMP=0x00000000000bae1f
- (_Bool)fileIsReadable;	// IMP=0x00000000000bada4
- (_Bool)fileExists;	// IMP=0x00000000000bad29
@end

