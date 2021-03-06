//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensions/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface DEAttachmentItem : NSObject <NSSecureCoding>
{
    NSString *_displayName;	// 8 = 0x8
    NSURL *_path;	// 16 = 0x10
    NSDate *_modificationDate;	// 24 = 0x18
    NSNumber *_filesize;	// 32 = 0x20
    NSNumber *_shouldCompress;	// 40 = 0x28
    NSURL *_attachedPath;	// 48 = 0x30
    NSString *_attachmentType;	// 56 = 0x38
    NSNumber *_deleteOnAttach;	// 64 = 0x40
    NSString *__sandboxExtensionToken;	// 72 = 0x48
}

+ (id)attachmentWithPathURL:(id)arg1;	// IMP=0x000000000000b1c6
+ (id)attachmentWithPath:(id)arg1;	// IMP=0x000000000000b179
+ (id)attachmentWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4;	// IMP=0x000000000000b0c8
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000add5
- (void).cxx_destruct;	// IMP=0x000000000000b3cd
@property(readonly, nonatomic) NSString *_sandboxExtensionToken; // @synthesize _sandboxExtensionToken=__sandboxExtensionToken;
@property(copy, nonatomic) NSNumber *deleteOnAttach; // @synthesize deleteOnAttach=_deleteOnAttach;
@property(copy, nonatomic) NSString *attachmentType; // @synthesize attachmentType=_attachmentType;
@property(retain, nonatomic) NSURL *attachedPath; // @synthesize attachedPath=_attachedPath;
@property(retain, nonatomic) NSNumber *shouldCompress; // @synthesize shouldCompress=_shouldCompress;
@property(retain, nonatomic) NSNumber *filesize; // @synthesize filesize=_filesize;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSURL *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)sandboxExtensionHandleWithErrorOut:(id *)arg1;	// IMP=0x000000000000b213
- (id)description;	// IMP=0x000000000000b070
- (void)detach;	// IMP=0x000000000000b00d
- (id)attachToDestinationDir:(id)arg1;	// IMP=0x000000000000addd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000acf0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ab78
- (id)initWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4;	// IMP=0x000000000000aa88
- (void)_generateSandboxExtensionTokenForPID:(int)arg1;	// IMP=0x000000000000a59b
- (id)initWithPathURL:(id)arg1;	// IMP=0x000000000000a14e
- (id)initWithPath:(id)arg1;	// IMP=0x000000000000a0f4
- (id)init;	// IMP=0x000000000000a03c

@end

