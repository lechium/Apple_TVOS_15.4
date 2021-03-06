//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNRequestSpecifying-Protocol.h>

@class NSString;

@interface VNRequestSpecifier : NSObject <NSCopying, NSSecureCoding, VNRequestSpecifying>
{
    unsigned int _requestClassCode;	// 8 = 0x8
    unsigned long long _requestRevision;	// 16 = 0x10
    NSString *_cachedRequestClassName;	// 24 = 0x18
    Class _cachedRequestClass;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005c0a8
+ (id)specifierForRequestClassName:(id)arg1 revision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000005bfea
+ (id)specifierForRequestClass:(Class)arg1 revision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000005bf37
+ (id)specifierForRequest:(id)arg1;	// IMP=0x000000000005be5f
+ (id)specifierForRequestClassCode:(unsigned int *)arg1 revision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000005bdaf
- (void).cxx_destruct;	// IMP=0x000000000005bd9f
- (Class)requestClassAndReturnError:(id *)arg1;	// IMP=0x000000000005bd10
@property(readonly, copy) NSString *requestClassName;
@property(readonly, nonatomic) unsigned long long requestRevision;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005bb84
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005bb12
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005bb07
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005ba3f
- (unsigned long long)hash;	// IMP=0x000000000005b9df
- (id)description;	// IMP=0x000000000005b8b7
- (_Bool)specifiesAnyRequestClassName:(id)arg1;	// IMP=0x000000000005b718
- (_Bool)specifiesRequestClassName:(id)arg1;	// IMP=0x000000000005b6a1
- (_Bool)specifiesAnyRequestClass:(Class)arg1;	// IMP=0x000000000005b5a5
- (_Bool)specifiesRequestClass:(Class)arg1;	// IMP=0x000000000005b578
- (_Bool)specifiesRequestClassName:(id)arg1 withAnyRevision:(unsigned long long)arg2;	// IMP=0x000000000005b41b
- (_Bool)specifiesRequestClass:(Class)arg1 withAnyRevision:(unsigned long long)arg2;	// IMP=0x000000000005b300
- (_Bool)specifiesRequestClassName:(id)arg1 revision:(unsigned long long)arg2;	// IMP=0x000000000005b27c
- (_Bool)specifiesRequestClass:(Class)arg1 revision:(unsigned long long)arg2;	// IMP=0x000000000005b228
@property(readonly) unsigned int requestClassCode;
- (id)initWithRequestClass:(Class)arg1 name:(id)arg2 code:(unsigned int)arg3 revision:(unsigned long long)arg4;	// IMP=0x000000000005b18b

@end

