//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface SSHTTPArchive : NSObject
{
    _Bool _compressed;	// 8 = 0x8
    NSData *_backingJSONData;	// 16 = 0x10
}

+ (double)_timeIntervalFromFilename:(id)arg1;	// IMP=0x00000000000fe6e8
+ (id)_stringFromDate:(id)arg1;	// IMP=0x00000000000fe63d
+ (id)_responseDictionaryForTaskMetrics:(id)arg1 responseData:(id)arg2;	// IMP=0x00000000000fe230
+ (id)_requestDictionaryForTaskTransactionMetrics:(id)arg1 requestData:(id)arg2;	// IMP=0x00000000000fddcb
+ (id)_localIPAddress;	// IMP=0x00000000000fdca9
+ (id)_generateCommentsForTaskMetrics:(id)arg1;	// IMP=0x00000000000fdaf7
+ (id)_JSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;	// IMP=0x00000000000fda98
+ (id)_JSONObjectForEntries:(id)arg1;	// IMP=0x00000000000fd975
+ (id)_headersArrayForHTTPHeaders:(id)arg1;	// IMP=0x00000000000fd728
+ (id)_entryDictionaryForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;	// IMP=0x00000000000fd4c4
+ (id)_entriesArrayForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;	// IMP=0x00000000000fd2ae
+ (id)_dateFormatterForTimeZone:(id)arg1;	// IMP=0x00000000000fcf73
+ (id)_creatorDictionary;	// IMP=0x00000000000fce41
+ (id)_contentDictionaryForResponse:(id)arg1 responseData:(id)arg2;	// IMP=0x00000000000fcbac
+ (void)sendWriteAllLogsToDiskDecompressedNotification;	// IMP=0x00000000000fc1bb
+ (void)sendWriteAllLogsToDiskNotification;	// IMP=0x00000000000fc198
+ (void)removeLogsWithLogConfig:(id)arg1 olderThanDate:(id)arg2;	// IMP=0x00000000000fb9ff
+ (id)outputDirectoryForLogConfig:(id)arg1;	// IMP=0x00000000000fb957
+ (id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2;	// IMP=0x00000000000fb4e8
+ (id)merge:(id)arg1;	// IMP=0x00000000000fb230
- (void).cxx_destruct;	// IMP=0x00000000000fe8ba
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
@property(retain, nonatomic) NSData *backingJSONData; // @synthesize backingJSONData=_backingJSONData;
- (id)description;	// IMP=0x00000000000fcb9a
- (_Bool)writeToDiskWithLogConfig:(id)arg1 compressed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000fc459
- (_Bool)writeToDiskError:(id *)arg1;	// IMP=0x00000000000fc43d
@property(readonly, nonatomic) NSString *JSONString;
@property(readonly, nonatomic) NSDictionary *JSONObject;
@property(readonly, nonatomic) NSData *JSONData;
- (id)initWithTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;	// IMP=0x00000000000fb00f
- (id)initWithJSONObject:(id)arg1;	// IMP=0x00000000000faf11

@end

