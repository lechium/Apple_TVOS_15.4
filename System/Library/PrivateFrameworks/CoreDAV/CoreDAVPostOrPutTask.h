//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask
{
    _Bool _forceToServer;	// 48 = 0x30
    NSString *_previousETag;	// 56 = 0x38
    NSString *_requestDataContentType;	// 64 = 0x40
    NSData *_requestDataPayload;	// 72 = 0x48
    _Bool _sendOrder;	// 80 = 0x50
    int _absoluteOrder;	// 84 = 0x54
    NSURL *_priorOrderedURL;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000002652e
@property(retain, nonatomic) NSURL *priorOrderedURL; // @synthesize priorOrderedURL=_priorOrderedURL;
@property(nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
@property(retain, nonatomic) NSData *requestDataPayload; // @synthesize requestDataPayload=_requestDataPayload;
@property(retain, nonatomic) NSString *requestDataContentType; // @synthesize requestDataContentType=_requestDataContentType;
@property(retain, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;
@property(nonatomic) _Bool forceToServer; // @synthesize forceToServer=_forceToServer;
- (id)requestBody;	// IMP=0x00000000000263ed
- (id)additionalHeaderValues;	// IMP=0x000000000002617c
- (id)description;	// IMP=0x0000000000025fee
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;	// IMP=0x0000000000025f09
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000025eed

@end

