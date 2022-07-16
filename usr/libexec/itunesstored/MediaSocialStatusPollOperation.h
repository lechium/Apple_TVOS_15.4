//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface MediaSocialStatusPollOperation : ISOperation
{
    CDUnknownBlockType _responseBlock;	// 96 = 0x60
    NSArray *_statusPollRequests;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000017452d
- (id)_requestURL;	// IMP=0x00100000001743ec
- (void)main;	// IMP=0x0010000000173969
@property(readonly, copy) NSArray *statusPollRequests;
@property(copy) CDUnknownBlockType responseBlock;
- (id)initWithStatusPollRequests:(id)arg1;	// IMP=0x00100000001737ba

@end
