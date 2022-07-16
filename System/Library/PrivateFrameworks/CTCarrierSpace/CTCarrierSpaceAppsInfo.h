//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CTCarrierSpaceAppsInfo : NSObject <NSSecureCoding>
{
    NSArray *_appsList;	// 8 = 0x8
    NSString *_appsURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008a3a
- (void).cxx_destruct;	// IMP=0x0000000000008a78
@property(retain, nonatomic) NSString *appsURL; // @synthesize appsURL=_appsURL;
@property(retain, nonatomic) NSArray *appsList; // @synthesize appsList=_appsList;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000891c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000088ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000086db
- (id)description;	// IMP=0x00000000000085f1
- (id)init;	// IMP=0x000000000000858d

@end

