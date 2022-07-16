//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKGroupsControllerSnapshotFetchOptions : NSObject <NSSecureCoding>
{
    _Bool _limitResults;	// 8 = 0x8
    _Bool _includeAnnotations;	// 9 = 0x9
    unsigned long long _allowedPassType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000042967b
@property(nonatomic) unsigned long long allowedPassType; // @synthesize allowedPassType=_allowedPassType;
@property(nonatomic) _Bool includeAnnotations; // @synthesize includeAnnotations=_includeAnnotations;
@property(nonatomic) _Bool limitResults; // @synthesize limitResults=_limitResults;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000042977d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004296cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000429683

@end

