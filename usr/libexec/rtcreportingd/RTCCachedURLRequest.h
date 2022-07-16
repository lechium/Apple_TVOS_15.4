//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURLRequest;

@interface RTCCachedURLRequest : NSObject
{
    NSDate *_dateToExpedite;	// 8 = 0x8
    NSURLRequest *_cachedRequest;	// 16 = 0x10
    NSString *_filePath;	// 24 = 0x18
    unsigned long long _nextOffset;	// 32 = 0x20
    _Bool _isRealtime;	// 40 = 0x28
    CDUnknownBlockType _eventCompletion;	// 48 = 0x30
    double _readTS;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000137c
@property(nonatomic) double readTS; // @synthesize readTS=_readTS;
@property(copy, nonatomic) CDUnknownBlockType eventCompletion; // @synthesize eventCompletion=_eventCompletion;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly) NSURLRequest *cachedRequest; // @synthesize cachedRequest=_cachedRequest;
@property(nonatomic) unsigned long long nextOffset; // @synthesize nextOffset=_nextOffset;
@property(readonly, nonatomic) _Bool isExpedited;
- (_Bool)isRealtime;	// IMP=0x001000000000141b
- (void)setIsRealtime:(_Bool)arg1;	// IMP=0x0010000000001412
- (id)dateToExpedite;	// IMP=0x0010000000001408
- (void)setDateToExpedite:(id)arg1;	// IMP=0x00100000000013d8
- (id)description;	// IMP=0x0010000000001384
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000012e7
- (void)dealloc;	// IMP=0x0010000000001273
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000113c
- (id)initWithURLRequest:(id)arg1 expediteAfterInterval:(double)arg2 isRealtime:(_Bool)arg3;	// IMP=0x001000000000106c

@end

