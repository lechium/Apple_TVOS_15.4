//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PCSAccountManager : NSObject
{
    NSString *_dsid;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000104b0
@property(retain) NSString *dsid; // @synthesize dsid=_dsid;
- (unsigned long long)accountStatus;	// IMP=0x0000000000010391
- (id)initWithDSID:(id)arg1;	// IMP=0x0000000000010313

@end

