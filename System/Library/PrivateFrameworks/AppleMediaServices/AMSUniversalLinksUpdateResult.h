//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@interface AMSUniversalLinksUpdateResult : NSObject <NSSecureCoding>
{
    _Bool _success;	// 8 = 0x8
}

+ (id)archiveClasses;	// IMP=0x000000000021d610
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000021d608
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021d599
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000021d540

@end

