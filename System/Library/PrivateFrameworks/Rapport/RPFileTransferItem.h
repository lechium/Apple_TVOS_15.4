//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSString, NSURL;

@interface RPFileTransferItem : NSObject
{
    _Bool _completed;	// 8 = 0x8
    long long _fileSize;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    NSString *_filename;	// 32 = 0x20
    NSURL *_itemURL;	// 40 = 0x28
    NSDictionary *_metadata;	// 48 = 0x30
    NSData *_sha256HashData;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
    unsigned long long _estimatedSize;	// 72 = 0x48
    NSData *_fileData;	// 80 = 0x50
    unsigned long long _fileID;	// 88 = 0x58
    unsigned long long _metadataSize;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000037d48
@property(nonatomic) unsigned long long metadataSize; // @synthesize metadataSize=_metadataSize;
@property(nonatomic) unsigned long long fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(nonatomic) unsigned long long estimatedSize; // @synthesize estimatedSize=_estimatedSize;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(copy, nonatomic) NSData *sha256HashData; // @synthesize sha256HashData=_sha256HashData;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000000037bb5
- (id)description;	// IMP=0x0000000000037b9e
- (id)init;	// IMP=0x0000000000037b48

@end

