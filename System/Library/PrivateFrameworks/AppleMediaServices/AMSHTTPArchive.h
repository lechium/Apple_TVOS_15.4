//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface AMSHTTPArchive : NSObject <NSSecureCoding>
{
    _Bool _compressed;	// 8 = 0x8
    NSString *_urlString;	// 16 = 0x10
    NSData *_backingJSONData;	// 24 = 0x18
    NSData *_JSONData;	// 32 = 0x20
}

+ (double)_timeIntervalFromFilename:(id)arg1;	// IMP=0x0000000000152353
+ (id)_createJSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;	// IMP=0x0000000000151fa8
+ (id)_createJSONObjectForEntries:(id)arg1;	// IMP=0x0000000000151d85
+ (id)ams_generateResponseDictionaryForMetrics:(id)arg1 responseData:(id)arg2;	// IMP=0x0000000000151958
+ (id)ams_generateRequestDictionaryForMetrics:(id)arg1 requestData:(id)arg2;	// IMP=0x000000000015145f
+ (id)ams_generateHeadersArrayForHTTPHeaders:(id)arg1;	// IMP=0x0000000000151377
+ (id)ams_generateContentDictionaryForResponse:(id)arg1 responseData:(id)arg2;	// IMP=0x00000000001510bb
+ (id)ams_generateCommentsStringForMetrics:(id)arg1;	// IMP=0x0000000000150f2b
+ (id)ams_dateFormatterForTimeZone:(id)arg1;	// IMP=0x0000000000150d77
+ (void)removeHTTPArchiveFilesOlderThanDate:(id)arg1;	// IMP=0x00000000001503ff
+ (id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2;	// IMP=0x000000000014ff0b
+ (id)merge:(id)arg1;	// IMP=0x000000000014feb1
+ (id)directory;	// IMP=0x000000000014fa43
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014fa3b
- (void).cxx_destruct;	// IMP=0x000000000015255e
@property(readonly, nonatomic) NSData *JSONData; // @synthesize JSONData=_JSONData;
@property(nonatomic, getter=isCompressed) _Bool compressed; // @synthesize compressed=_compressed;
@property(retain, nonatomic) NSData *backingJSONData; // @synthesize backingJSONData=_backingJSONData;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (_Bool)writeToDiskWithError:(id *)arg1 compressed:(_Bool)arg2 appendCombined:(_Bool)arg3;	// IMP=0x00000000001506e9
- (_Bool)writeToDiskWithError:(id *)arg1 compressed:(_Bool)arg2;	// IMP=0x00000000001506d4
- (void)logHARData;	// IMP=0x000000000014fb36
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014f91d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014f822
- (id)initWithJSONObject:(id)arg1;	// IMP=0x000000000014f72c
- (id)initWithMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;	// IMP=0x000000000014f6d2
- (id)initWithHTTPArchiveTaskInfo:(id)arg1;	// IMP=0x000000000014f515

@end

