//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/NSCopying-Protocol.h>

@interface FBWorkspaceIdentity : NSObject <NSCopying>
{
    int _pid;	// 8 = 0x8
}

+ (id)identityWithPid:(int)arg1;	// IMP=0x000000000004982a
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (id)description;	// IMP=0x0000000000049954
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000498f2
- (unsigned long long)hash;	// IMP=0x00000000000498e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000498dd
- (id)init;	// IMP=0x00000000000496fc
- (id)_initWithPid:(int)arg1;	// IMP=0x00000000000496c1

@end

