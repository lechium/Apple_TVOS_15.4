//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDExternalDeviceServerClientConnection, NSDate, PBSMediaRemoteSiriContext;

@interface MRDTelevisionSiriContext : NSObject
{
    PBSMediaRemoteSiriContext *_pineboardContext;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
    _Bool _didStartRecording;	// 17 = 0x11
    MRDExternalDeviceServerClientConnection *_client;	// 24 = 0x18
    NSDate *_timeBegan;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000058b31
@property(nonatomic) _Bool didStartRecording; // @synthesize didStartRecording=_didStartRecording;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) NSDate *timeBegan; // @synthesize timeBegan=_timeBegan;
@property(readonly, nonatomic) MRDExternalDeviceServerClientConnection *client; // @synthesize client=_client;
@property(readonly, nonatomic) PBSMediaRemoteSiriContext *pineboardContext;
- (id)description;	// IMP=0x0010000000058952
- (id)initWithClient:(id)arg1;	// IMP=0x00100000000588c7

@end

