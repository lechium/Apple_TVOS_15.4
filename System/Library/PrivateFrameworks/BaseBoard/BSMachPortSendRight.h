//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/NSCopying-Protocol.h>

@interface BSMachPortSendRight <NSCopying>
{
}

+ (BOOL)_type;	// IMP=0x000000000003f95f
+ (id)bootstrapLookUpWithName:(id)arg1;	// IMP=0x000000000003f695
+ (id)wrapSendRight:(unsigned int)arg1;	// IMP=0x0000000000025ad8
+ (id)bootstrapLookUpPortWithName:(id)arg1;	// IMP=0x0000000000041b2a
+ (id)taskNamePortForPID:(int)arg1;	// IMP=0x0000000000041b11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003f96a
- (id)initWithNonRetainingPort:(unsigned int)arg1;	// IMP=0x000000000003f859
- (id)initFromReceiveRight:(id)arg1;	// IMP=0x000000000003f51f
- (id)initWithCopyOfRight:(id)arg1;	// IMP=0x000000000003f3a9
- (id)initWithCopyOfPort:(unsigned int)arg1;	// IMP=0x000000000003f275
- (id)initWithPort:(unsigned int)arg1;	// IMP=0x000000000003f164
- (unsigned int)sendRight;	// IMP=0x0000000000025b17
- (id)initWithSendRight:(unsigned int)arg1;	// IMP=0x0000000000025b05
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(_Bool)arg2;	// IMP=0x0000000000041b4c

@end

