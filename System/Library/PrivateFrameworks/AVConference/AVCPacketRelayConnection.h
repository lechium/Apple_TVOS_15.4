//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVCPacketRelayConnection : NSObject
{
}

+ (id)connectionWithIDSSocketDescriptor:(unsigned short)arg1;	// IMP=0x00000000002cf8a5
+ (id)connectionWithIDSDestination:(id)arg1;	// IMP=0x00000000002cf86f
+ (id)connectionWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2 packetFilter:(id)arg3;	// IMP=0x00000000002cf827
+ (id)connectionWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2;	// IMP=0x00000000002cf7eb
+ (id)connectionWithSocket:(unsigned short)arg1;	// IMP=0x00000000002cf7b2

@end

