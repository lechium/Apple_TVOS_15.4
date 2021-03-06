//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class TVSWiFiInterface, TVSWiFiNetwork;

__attribute__((visibility("hidden")))
@interface TVSWiFiDisassociationOperation : NSOperation
{
    TVSWiFiInterface *_interface;	// 8 = 0x8
    TVSWiFiNetwork *_network;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000155d1
@property(retain, nonatomic) TVSWiFiNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) TVSWiFiInterface *interface; // @synthesize interface=_interface;
- (void)main;	// IMP=0x0000000000015581
- (id)initWithInterface:(id)arg1 network:(id)arg2;	// IMP=0x0000000000015573
- (id)init;	// IMP=0x0000000000015565

@end

