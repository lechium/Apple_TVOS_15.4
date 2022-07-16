//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MDMClientLibrary/NSSecureCoding-Protocol.h>

@class NSString;

@interface DEPDeviceUploadUser : NSObject <NSSecureCoding>
{
    NSString *_dsid;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000443a
- (void).cxx_destruct;	// IMP=0x00000000000046f9
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (id)initWithApproverDict:(id)arg1;	// IMP=0x0000000000004623
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004549
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000044db
- (id)initWithDsid:(id)arg1 name:(id)arg2;	// IMP=0x0000000000004442

@end
