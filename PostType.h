/**
 * @file PostType.h
 * @brief PostType type declaration
 * @author Masayuki YAMAYA
 * @date 2010-06-01
 */
typedef enum {
	UndefinedPostType,
	RegularPostType,
	LinkPostType,
	QuotePostType,
	PhotoPostType,
	ConversationPostType,
	VideoPostType,
	AudioPostType,
	ReblogPostType,
} PostType;

@interface NSString (TumblrfulPostTypeAddition)

+ (NSString *)stringWithPostType:(PostType)postType;

- (PostType)postType;
@end
