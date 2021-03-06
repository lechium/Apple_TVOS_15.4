//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

@interface UploadRecord : NSObject
{
    int _uploadStatus;	// 8 = 0x8
    NSString *_uploadIdentifier;	// 16 = 0x10
    NSData *_payload;	// 24 = 0x18
    NSString *_timestampReferenceIdentifier;	// 32 = 0x20
    unsigned long long _processedAttempts;	// 40 = 0x28
    NSDate *_dateCreated;	// 48 = 0x30
    NSDate *_dateLastProcessed;	// 56 = 0x38
    NSDate *_dateUploaded;	// 64 = 0x40
    unsigned long long _size;	// 72 = 0x48
    NSString *_applicationIdentifier;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000b9ef
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSDate *dateUploaded; // @synthesize dateUploaded=_dateUploaded;
@property(copy, nonatomic) NSDate *dateLastProcessed; // @synthesize dateLastProcessed=_dateLastProcessed;
@property(copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(nonatomic) unsigned long long processedAttempts; // @synthesize processedAttempts=_processedAttempts;
@property(nonatomic) int uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(copy, nonatomic) NSString *timestampReferenceIdentifier; // @synthesize timestampReferenceIdentifier=_timestampReferenceIdentifier;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(copy, nonatomic) NSString *uploadIdentifier; // @synthesize uploadIdentifier=_uploadIdentifier;
- (id)outcomeTelemetryDictionary;	// IMP=0x000000000000b68c

@end

