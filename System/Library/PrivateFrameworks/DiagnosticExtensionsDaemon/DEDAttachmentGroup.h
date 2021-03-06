//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>

@class DEDBugSession, DEDExtensionIdentifier, NSArray, NSString, NSURL;

@interface DEDAttachmentGroup : NSObject <DEDSecureArchiving>
{
    DEDBugSession *_fromBugSession;	// 8 = 0x8
    NSString *_deviceID;	// 16 = 0x10
    NSURL *_rootURL;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_extensionID;	// 40 = 0x28
    NSArray *_attachmentItems;	// 48 = 0x30
    DEDExtensionIdentifier *_dedExtensionIdentifier;	// 56 = 0x38
}

+ (id)archivedClasses;	// IMP=0x0000000000008fc7
+ (id)groupWithDEGroup:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000008176
+ (id)groupWithDictionary:(id)arg1;	// IMP=0x0000000000007d40
- (void).cxx_destruct;	// IMP=0x00000000000091e1
@property(retain, nonatomic) DEDExtensionIdentifier *dedExtensionIdentifier; // @synthesize dedExtensionIdentifier=_dedExtensionIdentifier;
@property(retain) NSArray *attachmentItems; // @synthesize attachmentItems=_attachmentItems;
@property(retain) NSString *extensionID; // @synthesize extensionID=_extensionID;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSURL *rootURL; // @synthesize rootURL=_rootURL;
@property(retain) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain) DEDBugSession *fromBugSession; // @synthesize fromBugSession=_fromBugSession;
- (_Bool)isLocal;	// IMP=0x0000000000008ead
@property(readonly, copy) NSString *description;
- (id)serialize;	// IMP=0x00000000000088da
- (id)archiveName;	// IMP=0x0000000000008720
- (id)totalFilesize;	// IMP=0x000000000000856c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

