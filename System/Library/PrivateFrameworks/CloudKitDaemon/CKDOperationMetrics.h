//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/MMCSOperationMetric-Protocol.h>
#import <CloudKitDaemon/NSCopying-Protocol.h>
#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding>
{
    NSDate *_startDate;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    double _queueing;	// 24 = 0x18
    double _executing;	// 32 = 0x20
    unsigned long long _bytesUploaded;	// 40 = 0x28
    unsigned long long _bytesDownloaded;	// 48 = 0x30
    unsigned long long _connections;	// 56 = 0x38
    unsigned long long _connectionsCreated;	// 64 = 0x40
    unsigned long long _recordsUploaded;	// 72 = 0x48
    unsigned long long _recordsDownloaded;	// 80 = 0x50
    unsigned long long _recordsDeleted;	// 88 = 0x58
    unsigned long long _assetsUploaded;	// 96 = 0x60
    unsigned long long _assetsUploadedFileSize;	// 104 = 0x68
    unsigned long long _assetsDownloaded;	// 112 = 0x70
    unsigned long long _assetsDownloadedFileSize;	// 120 = 0x78
    unsigned long long _requestCount;	// 128 = 0x80
    unsigned long long _retries;	// 136 = 0x88
    NSMutableSet *_requestUUIDs;	// 144 = 0x90
    NSMutableDictionary *_requestOperationCountsByType;	// 152 = 0x98
    NSMutableDictionary *_totalBytesByChunkProfile;	// 160 = 0xa0
    NSMutableDictionary *_chunkCountByChunkProfile;	// 168 = 0xa8
    NSMutableDictionary *_fileCountByChunkProfile;	// 176 = 0xb0
    NSMutableArray *_ranges;	// 184 = 0xb8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002eea9d
- (void).cxx_destruct;	// IMP=0x00000000002ef4bf
@property(retain, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property(retain, nonatomic) NSMutableDictionary *fileCountByChunkProfile; // @synthesize fileCountByChunkProfile=_fileCountByChunkProfile;
@property(retain, nonatomic) NSMutableDictionary *chunkCountByChunkProfile; // @synthesize chunkCountByChunkProfile=_chunkCountByChunkProfile;
@property(retain, nonatomic) NSMutableDictionary *totalBytesByChunkProfile; // @synthesize totalBytesByChunkProfile=_totalBytesByChunkProfile;
@property(retain, nonatomic) NSMutableDictionary *requestOperationCountsByType; // @synthesize requestOperationCountsByType=_requestOperationCountsByType;
@property(readonly) NSMutableSet *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property unsigned long long retries; // @synthesize retries=_retries;
@property unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property unsigned long long assetsDownloadedFileSize; // @synthesize assetsDownloadedFileSize=_assetsDownloadedFileSize;
@property unsigned long long assetsDownloaded; // @synthesize assetsDownloaded=_assetsDownloaded;
@property unsigned long long assetsUploadedFileSize; // @synthesize assetsUploadedFileSize=_assetsUploadedFileSize;
@property unsigned long long assetsUploaded; // @synthesize assetsUploaded=_assetsUploaded;
@property unsigned long long recordsDeleted; // @synthesize recordsDeleted=_recordsDeleted;
@property unsigned long long recordsDownloaded; // @synthesize recordsDownloaded=_recordsDownloaded;
@property unsigned long long recordsUploaded; // @synthesize recordsUploaded=_recordsUploaded;
@property unsigned long long connectionsCreated; // @synthesize connectionsCreated=_connectionsCreated;
@property unsigned long long connections; // @synthesize connections=_connections;
@property unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property unsigned long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property double executing; // @synthesize executing=_executing;
@property double queueing; // @synthesize queueing=_queueing;
@property double duration; // @synthesize duration=_duration;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002eee09
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002eeaa5
- (void)addCKSpecificMetricsFromMetrics:(id)arg1;	// IMP=0x00000000002ee84a
- (id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;	// IMP=0x00000000002ee7e8
- (void)addRequestOperationCountsByOperationType:(id)arg1;	// IMP=0x00000000002ee4c5
- (void)addRange:(id)arg1;	// IMP=0x00000000002ee16f
@property(readonly) NSArray *rangesCopy;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;	// IMP=0x00000000002edf89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002edbae
- (id)_initWithStartDate:(id)arg1;	// IMP=0x00000000002edae5
- (id)init;	// IMP=0x00000000002eda8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

