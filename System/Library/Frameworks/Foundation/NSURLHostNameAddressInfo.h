//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSURLHostNameAddressInfo : NSObject
{
    double timestamp;	// 8 = 0x8
    struct addrinfo *addressInfo;	// 16 = 0x10
}

+ (void)asyncResolveWithCallbackClient:(id)arg1;	// IMP=0x00000000001514da
+ (id)addressInfoForHost:(id)arg1;	// IMP=0x00000000001513e2
- (void)dealloc;	// IMP=0x0000000000151723
- (double)_timestamp;	// IMP=0x0000000000151718
- (struct addrinfo *)addrinfo;	// IMP=0x000000000015170e
- (id)_initWithAddressInfo:(struct addrinfo *)arg1;	// IMP=0x000000000015169a

@end
