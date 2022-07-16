//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/_CATRemoteConnectionSendContext-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _CATRemoteConnectionSendDataContext : NSObject <_CATRemoteConnectionSendContext>
{
    NSData *mEncodedData;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    id _userInfo;	// 24 = 0x18
    unsigned long long _bytesWritten;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001bee9
@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)bufferedDataWithError:(id *)arg1;	// IMP=0x000000000001be54
- (unsigned long long)headerLength;	// IMP=0x000000000001bdf2
@property(readonly, nonatomic) unsigned long long clientBytesWritten;
@property(readonly, nonatomic) _Bool hasBytesRemaining;
- (id)initWithData:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000001bbf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
