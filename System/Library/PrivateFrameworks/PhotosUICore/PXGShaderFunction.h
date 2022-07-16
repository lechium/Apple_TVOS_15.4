//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString;

@interface PXGShaderFunction : NSObject <NSCopying>
{
    _Bool _isOpaque;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_assignmentVariable;	// 24 = 0x18
}

+ (id)shaderFunctionByName;	// IMP=0x00000000000890ff
+ (id)shaderFunctions;	// IMP=0x00000000000890cf
- (void).cxx_destruct;	// IMP=0x00000000000890a7
@property(readonly, nonatomic) _Bool isOpaque; // @synthesize isOpaque=_isOpaque;
@property(readonly, copy, nonatomic) NSString *assignmentVariable; // @synthesize assignmentVariable=_assignmentVariable;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;	// IMP=0x0000000000089046
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008903b
- (id)description;	// IMP=0x0000000000088f51
- (id)initWithName:(id)arg1 assignmentVariable:(id)arg2 isOpaque:(_Bool)arg3;	// IMP=0x0000000000088e92

@end

