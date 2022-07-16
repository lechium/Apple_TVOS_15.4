//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class CHTextInputTarget, CHTokenizedTextResult, NSError;

@interface CHTextCorrectionResult : NSObject <NSSecureCoding>
{
    _Bool _characterLevel;	// 8 = 0x8
    CHTextInputTarget *_inputTarget;	// 16 = 0x10
    CHTokenizedTextResult *_textResult;	// 24 = 0x18
    long long _resultType;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    struct _NSRange _affectedRange;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ff980
- (void).cxx_destruct;	// IMP=0x00000000000ffc90
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic, getter=isCharacterLevel) _Bool characterLevel; // @synthesize characterLevel=_characterLevel;
@property(readonly, nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(readonly, nonatomic) CHTokenizedTextResult *textResult; // @synthesize textResult=_textResult;
@property(readonly, nonatomic) struct _NSRange affectedRange; // @synthesize affectedRange=_affectedRange;
@property(readonly, nonatomic) CHTextInputTarget *inputTarget; // @synthesize inputTarget=_inputTarget;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ffbd0
- (_Bool)isEqualToTextCorrectionResult:(id)arg1;	// IMP=0x00000000000ff990
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ff7e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ff6f0
- (id)description;	// IMP=0x00000000000ff3e0
- (id)initWithInputTarget:(id)arg1 affectedRange:(struct _NSRange)arg2 textResult:(id)arg3 resultType:(long long)arg4 isCharacterLevel:(_Bool)arg5 error:(id)arg6;	// IMP=0x00000000000ff280

@end

